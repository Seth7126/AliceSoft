// 函数: sub_4343a0
// 地址: 0x4343a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hFile = *(arg1 + 8)
BOOL buffer
uint32_t numberOfBytesRead
BOOL buffer_1

if (hFile != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
        && ReadFile(hFile, &buffer, 4, &numberOfBytesRead, nullptr) != 0 && numberOfBytesRead == 4)
    *(arg1 + 0xc) += 4
    buffer_1 = buffer
    uint32_t var_8
    
    if (buffer_1.b == 0x53 && buffer_1:1.b == 0x4f && buffer:2.b == 0x4e && buffer:3.b == 0x44
            && sub_67f1b0(arg1 + 4, &var_8).b != 0)
        uint32_t eax_1 = var_8
        
        if (eax_1 != 0)
            sub_405950(arg1 + 0xac, eax_1)
            return sub_67f160(arg1 + 4, *(arg1 + 0xac), var_8) != 0
        
        eax_1.b = 1
        return eax_1

buffer_1.b = 0
return buffer_1
