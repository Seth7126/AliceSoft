// 函数: sub_577310
// 地址: 0x577310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_2 = arg3
int32_t ebp = arg5
int32_t eax = arg2
void** esi = arg6
int32_t* ebx = arg3
int32_t var_4 = eax
int32_t* edi = arg4

if (ebx != eax && edi != ebp)
    while (true)
        void* ebp_1 = *ebx
        
        if (sub_58d3c0(*edi, ebp_1) == 0)
            eax = var_4
            ebx = &ebx[1]
            *esi = ebp_1
            esi = &esi[1]
            
            if (ebx == eax)
                ebp = arg5
                break
        else
            void* eax_2 = *edi
            edi = &edi[1]
            ebp = arg5
            *esi = eax_2
            esi = &esi[1]
            
            if (edi == ebp)
                eax = var_4
                break

void* eax_3 = eax - ebx
sub_6feca0(esi, ebx, eax_3)
void* result = esi + eax_3

if (arg7 != 0)
    return result

void* ebp_2 = ebp - edi
sub_6feca0(result, edi, ebp_2)
return result + ebp_2
