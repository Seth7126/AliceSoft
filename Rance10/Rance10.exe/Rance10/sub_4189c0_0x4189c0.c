// 函数: sub_4189c0
// 地址: 0x4189c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = data_7fcb88
int32_t* result

if (ecx != 0)
    result = (**ecx)(0x75cf80)
    *(arg1 + 4) = result
    
    if (result != 0)
        result = (*(*result + 0x14))(0x75cf40)
        *(arg1 + 8) = result
        
        if (result != 0)
            result = (*(**(arg1 + 4) + 0x14))(0x75cf30)
            *(arg1 + 0xc) = result
            
            if (result != 0)
                result = (*(**(arg1 + 4) + 0x14))(0x75cf50)
                *(arg1 + 0x10) = result
                
                if (result != 0)
                    result = (*(**(arg1 + 4) + 0x14))(0x75cf60)
                    *(arg1 + 0x14) = result
                    
                    if (result != 0)
                        *(arg1 + 0x18) = 0
                        result.b = 1
                        return result

result.b = 0
return result
