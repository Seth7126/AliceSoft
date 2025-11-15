// 函数: sub_5b6cb0
// 地址: 0x5b6cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* esi = arg6
int64_t* edi = arg4

if (arg3 != arg2 && edi != arg5)
    bool cond:0_1
    
    do
        if (*(edi + 4) f<= *(arg3 + 4))
            *esi = *arg3
            int32_t eax_1 = *(arg3 + 8)
            arg3 = &arg3[0xc]
            esi[1].d = eax_1
            esi += 0xc
            cond:0_1 = arg3 != arg2
        else
            *esi = *edi
            int32_t eax = edi[1].d
            edi += 0xc
            esi[1].d = eax
            esi += 0xc
            cond:0_1 = edi != arg5
    while (cond:0_1)

void* ebp_1 = arg2 - arg3
sub_6feca0(esi, arg3, ebp_1)
void* result = esi + ebp_1

if (arg7 != 0)
    return result

void* ebx_1 = arg5 - edi
sub_6feca0(result, edi, ebx_1)
return ebx_1 + result
