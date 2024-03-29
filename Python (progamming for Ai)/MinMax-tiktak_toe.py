# This function is used to draw the board's current state.
def ConstBoard(board):
    print("Current State Of Board : \n\n");
    for i in range(0, 9):
        if ((i > 0) and (i % 3) == 0):
            print("\n");
        if (board[i] == 0):
            print("- ", end=" ");
        if (board[i] == 1):
            print("O ", end=" ");
        if (board[i] == -1):
            print("X ", end=" ");
    print("\n\n");


# This function takes the user move as input and make the required changes on the board.
def User1Turn(board):
    pos = input("Enter X's position from [1...9]: ");
    pos = int(pos);
    if (board[pos - 1] != 0):
        print("Wrong Move!!!");
        exit(0);
    board[pos - 1] = -1;


def User2Turn(board):
    pos = input("Enter O's position from [1...9]: ");
    pos = int(pos);
    if (board[pos - 1] != 0):
        print("Wrong Move!!!");
        exit(0);
    board[pos - 1] = 1;


def minimax(board, player, depth, alpha, beta):
    x = analyzeboard(board)
    if x != 0 or depth == 0:
        return x * player

    if player == -1:
        value = float('-inf')
        for i in range(9):
            if board[i] == 0:
                board[i] = player
                value = max(value, -minimax(board, player * -1, depth - 1, alpha, beta))
                board[i] = 0
                alpha = max(alpha, value)
                if alpha >= beta:
                    break
        return value
    else:
        value = float('inf')
        for i in range(9):
            if board[i] == 0:
                board[i] = player
                value = min(value, -minimax(board, player * -1, depth - 1, alpha, beta))
                board[i] = 0
                beta = min(beta, value)
                if beta <= alpha:
                    break
        return value
def CompTurn(board):
    pos = -1
    value = float('-inf')
    alpha = float('-inf')
    beta = float('inf')
    for i in range(9):
        if board[i] == 0:
            board[i] = 1
            score = -minimax(board, -1, depth=3, alpha=alpha, beta=beta)  # Adjust depth as needed
            board[i] = 0
            if score > value:
                value = score
                pos = i

    board[pos] = 1


# This function is used to analyze a game.
def analyzeboard(board):
    cb = [[0, 1, 2], [3, 4, 5], [6, 7, 8], [0, 3, 6], [1, 4, 7], [2, 5, 8], [0, 4, 8], [2, 4, 6]];

    for i in range(0, 8):
        if (board[cb[i][0]] != 0 and
                board[cb[i][0]] == board[cb[i][1]] and
                board[cb[i][0]] == board[cb[i][2]]):
            return board[cb[i][2]];
    return 0;


# Main Function.
def main():
    choice = input("Enter 1 for single player, 2 for multiplayer: ");
    choice = int(choice);
    # The broad is considered in the form of a single dimentional array.
    # One player moves 1 and other move -1.
    board = [0, 0, 0, 0, 0, 0, 0, 0, 0];
    if (choice == 1):
        print("Computer : O Vs. You : X");
        player = input("Enter to play 1(st) or 2(nd) :");
        player = int(player);
        for i in range(0, 9):
            if (analyzeboard(board) != 0):
                break;
            if ((i + player) % 2 == 0):
                CompTurn(board);
            else:
                ConstBoard(board);
                User1Turn(board);
    else:
        for i in range(0, 9):
            if (analyzeboard(board) != 0):
                break;
            if ((i) % 2 == 0):
                ConstBoard(board);
                User1Turn(board);
            else:
                ConstBoard(board);
                User2Turn(board);

    x = analyzeboard(board);
    if (x == 0):
        ConstBoard(board);
        print("Draw!!!")
    if (x == -1):
        ConstBoard(board);
        print("X Wins!!! Y Loose !!!")
    if (x == 1):
        ConstBoard(board);
        print("X Loose!!! O Wins !!!!")

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    main()

