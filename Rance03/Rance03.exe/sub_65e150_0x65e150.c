// 函数: sub_65e150
// 地址: 0x65e150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg3
int32_t* esi = arg6
int32_t* edi = arg4

if (ebx != arg2 && edi != arg5)
    bool cond:1_1
    
    do
        int32_t* ecx = esi
        esi = &esi[0x30]
        
        if (*edi s>= *ebx)
            arg1 = sub_65dc20(ecx, ebx)
            ebx = &ebx[0x30]
            cond:1_1 = ebx != arg2
        else
            arg1 = sub_65dc20(ecx, edi)
            edi = &edi[0x30]
            cond:1_1 = edi != arg5
    while (cond:1_1)

int32_t var_18_3 = arg2
int32_t* eax_1 = sub_662e20(arg1, arg2, ebx, esi)
int32_t var_20 = arg2
return sub_662e20(eax_1, arg5, edi, eax_1)
