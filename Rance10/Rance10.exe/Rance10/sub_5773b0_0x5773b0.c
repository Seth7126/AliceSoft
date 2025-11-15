// 函数: sub_5773b0
// 地址: 0x5773b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
int32_t* esi = arg6
void* edi = arg5
char* eax_1 = arg4

if (arg3 != ebx && eax_1 != edi)
    while (true)
        void* ebp_1 = *(ebx - 4)
        void* ecx = *(edi - 4)
        void* var_4_1 = ebx
        ebx -= 4
        arg6 = edi
        edi -= 4
        esi -= 4
        
        if (sub_58d3c0(ecx, ebp_1) == 0)
            ebx = var_4_1
            *esi = *edi
            eax_1 = arg4
            
            if (eax_1 == edi)
                break
        else
            edi = arg6
            *esi = ebp_1
            
            if (arg3 == ebx)
                eax_1 = arg4
                break

void* edi_1 = edi - eax_1
return sub_6feca0(esi - edi_1, eax_1, edi_1)
