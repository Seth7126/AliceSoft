// 函数: sub_66ec30
// 地址: 0x66ec30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg5
int32_t* edi = arg2
int32_t arg_10

if (edi != arg4 && esi != arg6)
    bool cond:1_1
    
    do
        int32_t eax = esi[3]
        int32_t ecx = edi[3]
        
        if (eax s< ecx || (eax s<= ecx && *esi s< *edi))
            sub_66f8f0(&arg_10, esi)
            esi = &esi[0xa]
            cond:1_1 = esi != arg6
        else
            sub_66f8f0(&arg_10, edi)
            edi = &edi[0xa]
            cond:1_1 = edi != arg4
    while (cond:1_1)

int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c_3 = arg7
int32_t var_14
int32_t eax_4 = sub_66bb90(arg7, edi, &var_14, arg4, 0, 0)[4]
int32_t eax_5 = var_14

if (eax_5 != 0)
    j__free(eax_5)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_5 = eax_4
sub_66bb90(eax_4, esi, arg3, arg6, 0, 0)
int32_t eax_7 = arg_10

if (eax_7 != 0)
    j__free(eax_7)

return arg3
