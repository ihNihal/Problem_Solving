n, k, l, c, d, p, nl, np = map(int, input().split())
total_Q_drink = k*l
total_s_lime = c*d

T_drink_toast = total_Q_drink / n
Q_salt = p / np
toast_possible = min(T_drink_toast, total_s_lime, Q_salt) / n
print(toast_possible)
