// 函数: sub_442370
// 地址: 0x442370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hFile_1 = *(arg1 + 8)
int32_t buffer
uint32_t numberOfBytesRead

if (hFile_1 != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
        && ReadFile(hFile_1, &buffer, 4, &numberOfBytesRead, nullptr) != 0
        && numberOfBytesRead == 4)
    *(arg1 + 0xc) += 4
    int16_t buffer_1 = buffer.w
    
    if (buffer_1.b != 0x54 || buffer_1:1.b != 0x4d || buffer:2.b != 0x4e || buffer:3.b != 0x4c)
        uint32_t hFile = *(arg1 + 8)
        int32_t lDistanceToMove = *(arg1 + 0xc) - 4
        
        if (hFile != 0xffffffff && lDistanceToMove u< *(arg1 + 0x10))
            SetFilePointer(hFile, lDistanceToMove, nullptr, FILE_BEGIN)
            *(arg1 + 0xc) = lDistanceToMove
        
        hFile.b = 1
        return hFile
    
    int32_t var_4
    
    if (sub_604ee0(arg1 + 4, &var_4).b != 0)
        sub_6052e0(arg1 + 4, *(arg1 + 0xc) + var_4)
        HANDLE eax_4
        eax_4.b = 1
        return eax_4

BOOL eax
eax.b = 0
return eax
