// 函数: __cftoe2_l
// 地址: 0x6a91e6
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, arg7)
int32_t result
int32_t __saved_esi_1
void* eax

if (arg1 == 0 || arg2 u<= 0)
    eax = __errno()
    __saved_esi_1 = 0x16
label_6a922b:
    result = __saved_esi_1
    *eax = result
    __invalid_parameter_noinfo()
else
    int32_t edx_1 = arg3
    result = 0
    int32_t eax_1 = edx_1
    
    if (edx_1 s<= 0)
        eax_1 = 0
    
    if (arg2 u<= eax_1 + 9)
        eax = __errno()
        __saved_esi_1 = 0x22
        goto label_6a922b
    
    if (arg6 != 0)
        int32_t eax_3
        eax_3.b = edx_1 s> 0
        void* eax_4
        eax_4.b = *arg5 == 0x2d
        __shift(eax_4 + arg1, eax_3)
        edx_1 = arg3
    
    char* esi_1 = arg1
    
    if (*arg5 == 0x2d)
        *arg1 = 0x2d
        esi_1 = &arg1[1]
    
    if (edx_1 s> 0)
        int32_t* eax_6
        eax_6.b = esi_1[1]
        *esi_1 = eax_6.b
        esi_1 = &esi_1[1]
        char* eax_9
        eax_9.b = ***(var_14 + 0x84)
        *esi_1 = eax_9.b
    
    int32_t eax_10
    eax_10.b = arg6 == 0
    char* esi_2 = &esi_1[eax_10 + edx_1]
    void* eax_12 = 0xffffffff
    
    if (arg2 != 0xffffffff)
        eax_12 = arg1 - esi_2 + arg2
    
    if (_strcpy_s(esi_2, eax_12, "e+000") != 0)
        int32_t var_34
        __builtin_memset(&var_34, 0, 0x14)
        __invoke_watson()
        noreturn
    
    if (arg4 != 0)
        *esi_2 = 0x45
    
    if (*arg5[3] != 0x30)
        int32_t edx_3 = arg5[1]
        int32_t edx_4 = edx_3 - 1
        
        if (edx_3 - 1 s< 0)
            edx_4 = neg.d(edx_4)
            esi_2[1] = 0x2d
        
        if (edx_4 s>= 0x64)
            int32_t eax_18
            int32_t edx_5
            edx_5:eax_18 = sx.q(edx_4)
            edx_4 = mods.dp.d(edx_5:eax_18, 0x64)
            esi_2[2] += (divs.dp.d(edx_5:eax_18, 0x64)).b
        
        if (edx_4 s>= 0xa)
            int32_t eax_21
            int32_t edx_6
            edx_6:eax_21 = sx.q(edx_4)
            edx_4 = mods.dp.d(edx_6:eax_21, 0xa)
            esi_2[3] += (divs.dp.d(edx_6:eax_21, 0xa)).b
        
        esi_2[4] += edx_4.b
    
    if ((data_75d488 & 1) != 0 && esi_2[2] == 0x30)
        _memcpy(&esi_2[2], &esi_2[3], 3)
char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
