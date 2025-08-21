#include <stdio.h>

// Function to calculate determinant (recursive)
float determinant(float A[10][10], int n) {
    float det = 0;
    if (n == 1)
        return A[0][0];

    float temp[10][10];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        int subi=0;
        for (int i = 1; i < n; i++) {
            int subj=0;
            for (int j = 0; j < n; j++) {
                if (j == f) continue;
                temp[subi][subj] = A[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * A[0][f] * determinant(temp, n-1);
        sign = -sign;
    }
    return det;
}

// Function to calculate inverse using adjoint method
void inverse(float A[10][10], int n) {
    float det = determinant(A,n);
    if (det == 0) {
        printf("Matrix is singular, no inverse.\n");
        return;
    }

    float adj[10][10], inv[10][10];
    float temp[10][10];

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            int subi=0;
            for (int row=0;row<n;row++) {
                if (row==i) continue;
                int subj=0;
                for (int col=0;col<n;col++) {
                    if (col==j) continue;
                    temp[subi][subj] = A[row][col];
                    subj++;
                }
                subi++;
            }
            float cofactor = determinant(temp,n-1);
            if ((i+j)%2==1) cofactor = -cofactor;
            adj[j][i] = cofactor; // transpose
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            inv[i][j] = adj[i][j]/det;
        }
    }

    printf("Inverse matrix:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++)
            printf("%8.3f ", inv[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter matrix size n: ");
    scanf("%d", &n);

    float A[10][10];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%f", &A[i][j]);
        }
    }

    // Sum
    float sum=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            sum+=A[i][j];
    printf("Sum of elements = %.2f\n", sum);

    // Transpose
    printf("Transpose matrix:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++)
            printf("%.2f ", A[j][i]);
        printf("\n");
    }

    // Determinant
    float det = determinant(A,n);
    printf("Determinant = %.3f\n", det);

    // Inverse
    inverse(A,n);

    return 0;
}
