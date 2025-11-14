// 函数: sub_65e1d0
// 地址: 0x65e1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg6
int32_t* eax = arg3
void* esi = arg5
int32_t* edi = arg2
int32_t* var_4 = eax

if (eax != edi && arg4 != esi)
    bool cond:0_1
    
    do
        int32_t eax_1 = *(esi - 0xc0)
        esi -= 0xc0
        edi -= 0xc0
        ebx -= 0xc0
        
        if (eax_1 s>= *edi)
            eax = sub_65dc20(ebx, esi)
            edi = &edi[0x30]
            cond:0_1 = arg4 != esi
        else
            eax = sub_65dc20(ebx, edi)
            esi += 0xc0
            cond:0_1 = var_4 != edi
    while (cond:0_1)

int32_t* var_18_3 = var_4
int32_t* eax_2 = sub_662cc0(eax, esi, arg4, ebx)
int32_t* var_20 = var_4
return sub_662cc0(eax_2, edi, var_4, eax_2)
