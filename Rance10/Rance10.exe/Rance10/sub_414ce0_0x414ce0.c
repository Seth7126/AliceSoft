// 函数: sub_414ce0
// 地址: 0x414ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3[5]
int32_t eax_1 = (*(*arg3[4] + 0x14))(arg2)
int32_t* result = (*(*edi + 8))(eax_1)
int32_t esi = 0
arg2 = result

if (result s> 0)
    do
        if (sub_407560(arg1 + 0x2c, (*(*edi + 0x10))(eax_1, esi)).b != 0)
            result = (*(*edi + 0xc))(eax_1, esi)
            
            if (result != 0)
                int32_t var_14_4 = 0
                *(arg1 + 4) = (**result)()
                
                if (sub_4153a0(arg1, eax_1, esi, arg3).b != 0)
                    result.b = 1
                    return result
        
        esi += 1
    while (esi s< arg2)

result.b = 0
return result
