def determinant(matrix):
    if len(matrix) == 1:
        return matrix[0][0]
    if len(matrix) == 2:
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]
    
    det = 0
    for c in range(len(matrix)):
        minor = [r[:c] + r[c + 1:] for r in matrix[1:]]
        det += ((-1) ** c) * matrix[0][c] * determinant(minor)
        
    return det