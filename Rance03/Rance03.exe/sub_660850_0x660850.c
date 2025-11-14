// 函数: sub_660850
// 地址: 0x660850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg3
int32_t* esi = arg4
int32_t* edi = arg6

if (ebx != arg2 && esi != arg5)
    bool cond:2_1
    
    do
        int32_t eax = esi[8]
        int32_t ecx = ebx[8]
        
        if (eax s< ecx || (eax s<= ecx && *esi s< *ebx))
            int32_t* ecx_2 = edi
            edi = &edi[0x30]
            arg1 = sub_65dc20(ecx_2, esi)
            esi = &esi[0x30]
            cond:2_1 = esi != arg5
        else
            int32_t* ecx_1 = edi
            edi = &edi[0x30]
            arg1 = sub_65dc20(ecx_1, ebx)
            ebx = &ebx[0x30]
            cond:2_1 = ebx != arg2
    while (cond:2_1)

int32_t var_18_3 = arg2
int32_t* eax_2 = sub_662e20(arg1, arg2, ebx, edi)
int32_t var_20 = arg2
return sub_662e20(eax_2, arg5, esi, eax_2)
