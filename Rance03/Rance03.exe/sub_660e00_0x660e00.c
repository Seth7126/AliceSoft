// 函数: sub_660e00
// 地址: 0x660e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg6
int32_t* eax = arg3
int32_t* esi = arg5
int32_t* edi = arg2
int32_t* var_4 = eax

if (eax != edi && arg4 != esi)
    bool cond:2_1
    
    do
        int32_t eax_1 = edi[-0x27]
        edi -= 0xc0
        int32_t edx = esi[-0x26]
        esi -= 0xc0
        int32_t ebp_1 = edi[0xa]
        int32_t eax_2 = esi[0xb]
        int32_t ecx_1
        
        if (esi[9] s>= eax_1)
            ecx_1 = edi[0xb]
        
        if (esi[9] s>= eax_1 && (esi[9] s> edi[9] || (edx s>= ebp_1
                && (edx s> ebp_1 || (eax_2 s>= ecx_1 && (eax_2 s> ecx_1 || *esi s>= *edi))))))
            ebx -= 0xc0
            eax = sub_65dc20(ebx, esi)
            edi = &edi[0x30]
            cond:2_1 = arg4 != esi
        else
            ebx -= 0xc0
            eax = sub_65dc20(ebx, edi)
            esi = &esi[0x30]
            cond:2_1 = var_4 != edi
    while (cond:2_1)

int32_t* var_18_3 = var_4
int32_t* eax_4 = sub_662cc0(eax, esi, arg4, ebx)
int32_t* var_20 = var_4
return sub_662cc0(eax_4, edi, var_4, eax_4)
