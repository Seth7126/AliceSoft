// 函数: sub_55a730
// 地址: 0x55a730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
void* ebx = arg2
int32_t* ecx = arg4
void** esi = arg6
void* edi = arg5

if (arg3 != ebx && ecx != edi)
    while (true)
        void* ebp_1 = *(ebx - 4)
        ebx -= 4
        void* ecx_1 = *(edi - 4)
        edi -= 4
        esi -= 4
        
        if (sub_5594e0(ecx_1, ebp_1) == 0)
            *esi = ecx_1
            ebx += 4
            ecx = arg4
            
            if (ecx == edi)
                break
        else
            edi += 4
            *esi = ebp_1
            
            if (arg3 == ebx)
                ecx = arg4
                break

int32_t eax_2 = (edi - ecx) s>> 2 << 2
void* esi_1 = esi - eax_2
_memcpy(esi_1, ecx, eax_2)
void* eax_3 = (ebx - arg3) s>> 2 << 2
void* result = esi_1 - eax_3
_memcpy(result, arg3, eax_3)
return result
