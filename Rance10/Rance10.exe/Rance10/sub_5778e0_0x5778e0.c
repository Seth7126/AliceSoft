// 函数: sub_5778e0
// 地址: 0x5778e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg3
void* ebx = arg2
int32_t* esi = arg6
void* edi = arg5
char* eax_1 = arg4

if (arg3 != ebx && eax_1 != edi)
    while (true)
        int32_t var_18_1 = *(ebx - 4)
        void* ebp_1 = ebx
        arg6 = edi
        int32_t var_1c_1 = *(edi - 4)
        ebx -= 4
        edi -= 4
        int16_t top = top + 2
        esi -= 4
        
        if (sub_576130(var_1c_1, var_18_1) == 0)
            ebx = ebp_1
            *esi = *edi
            eax_1 = arg4
            
            if (eax_1 == edi)
                break
        else
            edi = arg6
            *esi = *ebx
            
            if (arg3 == ebx)
                eax_1 = arg4
                break

void* edi_1 = edi - eax_1
return sub_6feca0(esi - edi_1, eax_1, edi_1)
