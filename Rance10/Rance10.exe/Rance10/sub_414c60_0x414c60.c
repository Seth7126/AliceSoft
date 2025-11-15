// 函数: sub_414c60
// 地址: 0x414c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi_1 = *(arg2 + 0x14)
int32_t ebp = (*(*edi_1 + 0x14))()
void* esi = nullptr
int32_t result

if (ebp s> 0)
    do
        if (sub_407560(arg1 + 0x2c, (*(*edi_1 + 0x1c))(esi)).b != 0)
            result = (*(*edi_1 + 0x18))(esi)
            
            if (result != 0)
                void* var_14_3 = arg2
                *(arg1 + 4) = (**result)()
                
                if (sub_415180(arg1, esi).b != 0)
                    result.b = 1
                    return result
        
        esi += 1
    while (esi s< ebp)

result.b = 0
return result
