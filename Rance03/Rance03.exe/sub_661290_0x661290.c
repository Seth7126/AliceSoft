// 函数: sub_661290
// 地址: 0x661290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* esi = arg4
int32_t* edi = arg3
int32_t* ebx_1 = arg6

if (edi != arg2 && esi != arg5)
    bool cond:3_1
    
    do
        int32_t edx = esi[0xd]
        int32_t ebp_1 = edi[0xd]
        int32_t eax_1 = esi[0xe]
        int32_t ecx_1
        
        if (esi[0xc] s>= edi[0xc])
            ecx_1 = edi[0xe]
        
        if (esi[0xc] s>= edi[0xc] && (esi[0xc] s> edi[0xc] || (edx s>= ebp_1
                && (edx s> ebp_1 || (eax_1 s>= ecx_1 && (eax_1 s> ecx_1 || *esi s>= *edi))))))
            int32_t* ecx_2 = ebx_1
            ebx_1 = &ebx_1[0x30]
            arg1 = sub_65dc20(ecx_2, edi)
            edi = &edi[0x30]
            cond:3_1 = edi != arg2
        else
            int32_t* ecx_3 = ebx_1
            ebx_1 = &ebx_1[0x30]
            arg1 = sub_65dc20(ecx_3, esi)
            esi = &esi[0x30]
            cond:3_1 = esi != arg5
    while (cond:3_1)

int32_t var_18_3 = arg2
int32_t* eax_3 = sub_662e20(arg1, arg2, edi, ebx_1)
int32_t var_20 = arg2
return sub_662e20(eax_3, arg5, esi, eax_3)
