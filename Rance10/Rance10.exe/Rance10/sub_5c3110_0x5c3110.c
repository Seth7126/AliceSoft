// 函数: sub_5c3110
// 地址: 0x5c3110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4_1 = arg1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
char* var_4 = arg1
*arg1 = 0
int32_t ecx = sub_403590(arg1, arg2, 0, 0xffffffff)
*(arg1 + 0x18) = arg3
*(arg1 + 0x1c) = arg4
int32_t eax_1
eax_1.b = arg5
arg1[0x20] = eax_1.b
eax_1.b = arg6
arg1[0x21] = eax_1.b
char eax_3

if (arg7 != 0)
    eax_3 = 1
else
    int32_t var_14_1 = 8
    void* eax_2
    eax_2, ecx = sub_42cb30(arg1, "(sprite)", ecx)
    
    eax_3 = eax_2 != 0xffffffff ? 1 : 0

arg1[0x22] = eax_3
__builtin_memset(&arg1[0x23], 0, 0x19)
int32_t var_14_2 = 0xe
arg1[0x3c] = 1
bool cond:6 = sub_42cb30(arg1, "(nomakeshadow)", ecx) == 0xffffffff
*(arg1 + 0x40) = 0x3f800000
arg1[0x44] = 1
*(arg1 + 0x48) = 0x3dcccccd
void* eax_4
eax_4.b = cond:6
arg1[0x3d] = eax_4.b
*(arg1 + 0x4c) = 0x3dcccccd
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0x3f800000
*(arg1 + 0x5c) = 0x3f800000
*(arg1 + 0x60) = 0x3f800000
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0
arg1[0x6c] = 0
int32_t* ecx_3

if (*(arg1 + 0x14) u< 0x10)
    ecx_3 = arg1
else
    ecx_3 = *arg1

int32_t edi = *(arg1 + 0x10)
int32_t eax_5 = 9

if (edi u< 9)
    eax_5 = edi

int32_t eax_6
int32_t ecx_4
eax_6, ecx_4 = sub_406ac0(eax_5, "collision", ecx_3, eax_5)
bool cond:1 = eax_6 == 0

if (eax_6 == 0)
    bool c_1 = 9 u< edi
    
    if (9 == edi || c_1)
        eax_6 = neg.d(sbb.d(eax_6, eax_6, c_1))
    else
        eax_6 = 0xffffffff
    
    cond:1 = eax_6 == 0

int32_t var_14_4 = 0xc
eax_6.b = cond:1
*(arg1 + 0x70) = 0
arg1[0x6d] = eax_6.b
void* eax_8
int32_t ecx_6
eax_8, ecx_6 = sub_42cb30(arg1, "(nolighting)", ecx_4)
int32_t var_14_5 = 7
eax_8.b = eax_8 == 0xffffffff
arg1[0x74] = eax_8.b
void* eax_9
int32_t ecx_8
eax_9, ecx_8 = sub_42cb30(arg1, "(alpha)", ecx_6)
int32_t var_14_6 = 5
eax_9.b = eax_9 != 0xffffffff
arg1[0x75] = eax_9.b
void* eax_10
int32_t ecx_10
eax_10, ecx_10 = sub_42cb30(arg1, "(env)", ecx_8)
int32_t var_14_7 = 6
eax_10.b = eax_10 != 0xffffffff
arg1[0x76] = eax_10.b
bool cond:5 = sub_42cb30(arg1, "(both)", ecx_10) != 0xffffffff
arg1[0x78] = 1
void* eax_11
eax_11.b = cond:5
*(arg1 + 0x7c) = 0
arg1[0x77] = eax_11.b
return arg1
