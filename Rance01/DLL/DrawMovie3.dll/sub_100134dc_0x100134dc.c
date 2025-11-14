// 函数: sub_100134dc
// 地址: 0x100134dc
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_20 = edi
int32_t esi_1 = arg1[1] - 1
void* var_14
sub_10004910(&var_14, arg7)
void* var_c
char var_8

if (arg3 == 0 || arg4 u<= 0)
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x16

if (arg6 != 0 && esi_1 == arg5)
    void* eax_2
    eax_2.b = *arg1 == 0x2d
    char* eax_4 = eax_2 + esi_1 + arg3
    *eax_4 = 0x30
    eax_4[1] = 0

void* esi_2 = arg3

if (*arg1 == 0x2d)
    *arg3 = 0x2d
    esi_2 = &arg3[1]

int32_t eax_5 = arg1[1]
void* esi_3

if (eax_5 s> 0)
    esi_3 = esi_2 + eax_5
else
    sub_10012ec5(esi_2, 1)
    *esi_2 = 0x30
    esi_3 = esi_2 + 1

if (arg5 s> 0)
    sub_10012ec5(esi_3, 1)
    char* eax_10
    eax_10.b = ***(var_14 + 0xbc)
    *esi_3 = eax_10.b
    int32_t ebx_1 = arg1[1]
    
    if (ebx_1 s< 0)
        int32_t ebx_2 = neg.d(ebx_1)
        
        if (arg6 != 0 || arg5 s>= ebx_2)
            arg5 = ebx_2
        
        sub_10012ec5(esi_3 + 1, arg5)
        sub_10003d40(esi_3 + 1, 0x30, arg5)

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0
