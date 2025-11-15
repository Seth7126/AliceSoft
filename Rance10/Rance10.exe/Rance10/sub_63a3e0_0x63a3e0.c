// 函数: sub_63a3e0
// 地址: 0x63a3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4_1 = arg1
int32_t* ecx = data_7fcbb8
int32_t* result

if (ecx != 0)
    int32_t* edi_1 = (*(*ecx + 0x14))(0x76d9f0)
    
    if (edi_1 != 0)
        int32_t* ecx_1 = data_7fcbb8
        
        if (ecx_1 != 0)
            result = (*(*ecx_1 + 0x14))(0x76d9f0)
            
            if (result != 0 && (*(*result + 8))(sub_63a1f0(arg1)) == 0x2f)
                result = (*(*edi_1 + 0xc))(sub_63a1f0(arg1))
                
                if (result != 0)
                    result.b = *result
                    *arg2 = result.b
                    result.b = 1
                    return result
        
        result.b = 0
        return result

result.b = 0
return result
