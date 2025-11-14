// 函数: sub_65ff70
// 地址: 0x65ff70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg6
int32_t* eax = arg3
int32_t* esi = arg5
int32_t* edi = arg2
int32_t* var_4 = eax

if (eax != edi && arg4 != esi)
    bool cond:1_1
    
    do
        edi -= 0xc0
        int32_t eax_2 = esi[-0x2b] * esi[-0x2c]
        esi -= 0xc0
        int32_t ecx_1 = edi[5] * edi[4]
        
        if (eax_2 s< ecx_1 || (eax_2 s<= ecx_1 && *esi s< *edi))
            ebx -= 0xc0
            eax = sub_65dc20(ebx, edi)
            esi = &esi[0x30]
            cond:1_1 = var_4 != edi
        else
            ebx -= 0xc0
            eax = sub_65dc20(ebx, esi)
            edi = &edi[0x30]
            cond:1_1 = arg4 != esi
    while (cond:1_1)

int32_t* var_18_3 = var_4
int32_t* eax_4 = sub_662cc0(eax, esi, arg4, ebx)
int32_t* var_20 = var_4
return sub_662cc0(eax_4, edi, var_4, eax_4)
