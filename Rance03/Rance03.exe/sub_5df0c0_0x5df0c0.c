// 函数: sub_5df0c0
// 地址: 0x5df0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result

if (data_75d534 != 0)
    char* __saved_esi_1 = arg1
    result = sub_6203f0()
    
    if (result != 0)
        result = (**result)(0x6eac74)
        
        if (result != 0 && (**result)().b != 0)
            int32_t* ecx_2 = data_75d50c
            
            if (ecx_2 != 0)
                int32_t* edi_1 = (*(*ecx_2 + 0x14))(0x6eac84)
                
                if (edi_1 != 0 && sub_5def30(arg1) == 0x2f)
                    result = (*(*edi_1 + 0xc))(sub_5dee60(arg1))
                    
                    if (result != 0)
                        result.b = *result
                        *arg2 = result.b
                        result.b = 1
                        return result

result.b = 0
return result
