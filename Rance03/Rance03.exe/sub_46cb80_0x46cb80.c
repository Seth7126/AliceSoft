// 函数: sub_46cb80
// 地址: 0x46cb80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result

if (*(arg1 + 4) != 0)
    result.b = 1
    return result

if (data_75d534 != 0)
    void* var_c_1 = arg1
    int32_t* edi_1 = sub_6203f0()
    
    if (edi_1 != 0)
        result = (**edi_1)(0x6dd338)
        *(arg1 + 0xc) = result
        
        if (result != 0)
            *(arg1 + 8) = (**edi_1)(0x6dd2e8)
            *(arg1 + 0x10) = (**edi_1)(0x6dd2f8)
            *(arg1 + 0x14) = (**edi_1)(0x6dd318)
            *(arg1 + 0x18) = (**edi_1)(0x6dd328)
            result = (**edi_1)(0x6dd308)
            *(arg1 + 0x1c) = result
            
            if (result != 0)
                *(arg1 + 0x24) = 0
                result.b = 1
                *(arg1 + 4) = 1
                return result

result.b = 0
return result
