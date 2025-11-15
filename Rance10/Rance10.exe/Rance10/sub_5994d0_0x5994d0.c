// 函数: sub_5994d0
// 地址: 0x5994d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg2
int32_t* esi = arg6
int32_t* ebx = arg3
int32_t var_4 = eax
int32_t* edi = arg4

if (ebx != eax && edi != arg5)
    while (true)
        if (sub_597ff0(*edi, *ebx) == 0)
            int32_t eax_5 = *ebx
            ebx = &ebx[1]
            *esi = eax_5
            esi = &esi[1]
            eax = var_4
            
            if (ebx == eax)
                break
        else
            int32_t eax_2 = *edi
            edi = &edi[1]
            *esi = eax_2
            esi = &esi[1]
            
            if (edi == arg5)
                eax = var_4
                break

void* eax_3 = eax - ebx
sub_6feca0(esi, ebx, eax_3)
void* result = esi + eax_3

if (arg7 != 0)
    return result

void* ebp_1 = arg5 - edi
sub_6feca0(result, edi, ebp_1)
return result + ebp_1
