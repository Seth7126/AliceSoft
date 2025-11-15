// 函数: sub_414d70
// 地址: 0x414d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3[4]
int32_t* edi = arg3[5]
int32_t eax_3 = (*(*ebx + 0x18))((*(*ebx + 0x38))(arg2))
int32_t* ebp = (*(*edi + 0x20))(eax_3)
int32_t esi = 0
int32_t* result

if (ebp s> 0)
    do
        if (sub_407560(arg1 + 0x2c, (*(*edi + 0x28))(eax_3, esi)).b != 0)
            result = (*(*edi + 0x24))(eax_3, esi)
            
            if (result != 0)
                *(arg1 + 4) = (**result)()
                int32_t var_20_6 = 1
                
                if (sub_4153a0(arg1, (*(*ebx + 0x14))(arg2), esi, arg3).b != 0)
                    result.b = 1
                    return result
        
        esi += 1
    while (esi s< ebp)

result.b = 0
return result
