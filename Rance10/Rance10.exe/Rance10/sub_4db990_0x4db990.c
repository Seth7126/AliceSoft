// 函数: sub_4db990
// 地址: 0x4db990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void** eax = arg1 + 0x10
*(arg1 + 8) = 0xffffffff
*(arg1 + 0xc) = 0
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* result

while (true)
    int32_t edi_1 = *(arg2 + 8)
    
    if (*(arg2 + 4) + 4 u<= edi_1)
        void* edx_1 = *(arg2 + 4)
        result = ((zx.d(*(edx_1 + 3)) << 8 | zx.d(*(edx_1 + 2))) << 8 | zx.d(*(edx_1 + 1))) << 8
            | zx.d(*edx_1)
        *(arg2 + 4) = edx_1 + 4
        
        if (result == 0)
            break
        
        if (result != 1)
            if (result == 2)
                *(arg1 + 0xc) = 1
                continue
            else if (result != 3)
                continue
            else if (edx_1 + 8 u<= edi_1)
                uint32_t eax_14 = zx.d(*(edx_1 + 4))
                    | ((zx.d(*(edx_1 + 7)) << 8 | zx.d(*(edx_1 + 6))) << 8 | zx.d(*(edx_1 + 5)))
                    << 8
                *(arg2 + 4) = edx_1 + 8
                
                if (sub_6c9360(arg2, arg1 + 0x10, (eax_14 + 3) & 0xfffffffc).b != 0)
                    continue
        else if (edx_1 + 8 u<= edi_1)
            *(arg1 + 8) =
                ((zx.d(*(edx_1 + 7)) << 8 | zx.d(*(edx_1 + 6))) << 8 | zx.d(*(edx_1 + 5))) << 8
                | zx.d(*(edx_1 + 4))
            *(arg2 + 4) += 4
            continue
    
    result.b = 0
    return result

result.b = 1
return result
