// 函数: sub_100062c1
// 地址: 0x100062c1
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 == 0)
    sub_10006d2a()
    noreturn

int32_t i = 0
char var_5 = 0

if (*arg1 s> 0)
    do
        int32_t* eax_2 = *(*(arg2 + 0x1c) + 0xc)
        int32_t j = *eax_2
        void* esi_1 = &eax_2[1]
        
        while (j s> 0)
            if (sub_10006075(arg1[1] + (i << 4), *esi_1, *(arg2 + 0x1c)) != 0)
                var_5 = 1
                break
            
            j -= 1
            esi_1 += 4
        
        i += 1
    while (i s< *arg1)

int32_t result
result.b = var_5
return result
