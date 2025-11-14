// 函数: sub_66e6c0
// 地址: 0x66e6c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg5
int32_t* edi = arg2
int32_t arg_10

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        int32_t* ecx = &arg_10
        
        if (*esi s>= *edi)
            sub_66f8f0(ecx, edi)
            edi = &edi[0xa]
            cond:0_1 = edi != arg4
        else
            sub_66f8f0(ecx, esi)
            esi = &esi[0xa]
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c_3 = arg7
int32_t var_14
int32_t eax_3 = sub_66bb90(arg7, edi, &var_14, arg4, 0, 0)[4]
int32_t eax_4 = var_14

if (eax_4 != 0)
    j__free(eax_4)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_5 = eax_3
sub_66bb90(eax_3, esi, arg3, arg6, 0, 0)
int32_t eax_6 = arg_10

if (eax_6 != 0)
    j__free(eax_6)

return arg3
