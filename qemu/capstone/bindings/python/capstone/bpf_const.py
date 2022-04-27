# For Capstone Engine. AUTO-GENERATED FILE, DO NOT EDIT [bpf_const.py]

BPF_OP_INVALID = 0
BPF_OP_REG = 1
BPF_OP_IMM = 2
BPF_OP_OFF = 3
BPF_OP_MEM = 4
BPF_OP_MMEM = 5
BPF_OP_MSH = 6
BPF_OP_EXT = 7

BPF_REG_INVALID = 0
BPF_REG_A = 1
BPF_REG_X = 2
BPF_REG_R0 = 3
BPF_REG_R1 = 4
BPF_REG_R2 = 5
BPF_REG_R3 = 6
BPF_REG_R4 = 7
BPF_REG_R5 = 8
BPF_REG_R6 = 9
BPF_REG_R7 = 10
BPF_REG_R8 = 11
BPF_REG_R9 = 12
BPF_REG_R10 = 13
BPF_REG_ENDING = 14

BPF_EXT_INVALID = 0
BPF_EXT_LEN = 1

BPF_INS_INVALID = 0
BPF_INS_ADD = 1
BPF_INS_SUB = 2
BPF_INS_MUL = 3
BPF_INS_DIV = 4
BPF_INS_OR = 5
BPF_INS_AND = 6
BPF_INS_LSH = 7
BPF_INS_RSH = 8
BPF_INS_NEG = 9
BPF_INS_MOD = 10
BPF_INS_XOR = 11
BPF_INS_MOV = 12
BPF_INS_ARSH = 13
BPF_INS_ADD64 = 14
BPF_INS_SUB64 = 15
BPF_INS_MUL64 = 16
BPF_INS_DIV64 = 17
BPF_INS_OR64 = 18
BPF_INS_AND64 = 19
BPF_INS_LSH64 = 20
BPF_INS_RSH64 = 21
BPF_INS_NEG64 = 22
BPF_INS_MOD64 = 23
BPF_INS_XOR64 = 24
BPF_INS_MOV64 = 25
BPF_INS_ARSH64 = 26
BPF_INS_LE16 = 27
BPF_INS_LE32 = 28
BPF_INS_LE64 = 29
BPF_INS_BE16 = 30
BPF_INS_BE32 = 31
BPF_INS_BE64 = 32
BPF_INS_LDW = 33
BPF_INS_LDH = 34
BPF_INS_LDB = 35
BPF_INS_LDDW = 36
BPF_INS_LDXW = 37
BPF_INS_LDXH = 38
BPF_INS_LDXB = 39
BPF_INS_LDXDW = 40
BPF_INS_STW = 41
BPF_INS_STH = 42
BPF_INS_STB = 43
BPF_INS_STDW = 44
BPF_INS_STXW = 45
BPF_INS_STXH = 46
BPF_INS_STXB = 47
BPF_INS_STXDW = 48
BPF_INS_XADDW = 49
BPF_INS_XADDDW = 50
BPF_INS_JMP = 51
BPF_INS_JEQ = 52
BPF_INS_JGT = 53
BPF_INS_JGE = 54
BPF_INS_JSET = 55
BPF_INS_JNE = 56
BPF_INS_JSGT = 57
BPF_INS_JSGE = 58
BPF_INS_CALL = 59
BPF_INS_EXIT = 60
BPF_INS_JLT = 61
BPF_INS_JLE = 62
BPF_INS_JSLT = 63
BPF_INS_JSLE = 64
BPF_INS_RET = 65
BPF_INS_TAX = 66
BPF_INS_TXA = 67
BPF_INS_ENDING = 68
BPF_INS_LD = BPF_INS_LDW
BPF_INS_LDX = BPF_INS_LDXW
BPF_INS_ST = BPF_INS_STW
BPF_INS_STX = BPF_INS_STXW

BPF_GRP_INVALID = 0
BPF_GRP_LOAD = 1
BPF_GRP_STORE = 2
BPF_GRP_ALU = 3
BPF_GRP_JUMP = 4
BPF_GRP_CALL = 5
BPF_GRP_RETURN = 6
BPF_GRP_MISC = 7
BPF_GRP_ENDING = 8
