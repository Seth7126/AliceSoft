// 函数: sub_42ffe0
// 地址: 0x42ffe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint8_t* lpBuffer_1
sub_431b80(&lpBuffer_1, 0x14)
uint32_t numberOfBytesRead
uint32_t numberOfBytesRead_1 = numberOfBytesRead
uint8_t* lpBuffer = lpBuffer_1
HANDLE hFile = *(numberOfBytesRead_1 + 8)
int32_t* result
int32_t ebx

if (hFile == 0xffffffff || *(numberOfBytesRead_1 + 0xc) + 0x14 u> *(numberOfBytesRead_1 + 0x10))
    ebx.b = 0
else if (ReadFile(hFile, lpBuffer, 0x14, &numberOfBytesRead, nullptr) == 0
        || numberOfBytesRead != 0x14)
    ebx.b = 0
else
    *(numberOfBytesRead_1 + 0xc) += 0x14
    
    if (*lpBuffer != 0x41 || lpBuffer[1] != 0x46 || lpBuffer[2] != 0x41 || lpBuffer[3] != 0x48)
        ebx.b = 0
    else
        result.b = lpBuffer[8]
        
        if (result.b == 3 && lpBuffer[9] == 0 && lpBuffer[0xa] == 0 && lpBuffer[0xb] == 0)
            ebx.b = 1
            *arg1 = 3
        else if (result.b != 0x41 || lpBuffer[9] != 0x6c || lpBuffer[0xa] != 0x69
                || lpBuffer[0xb] != 0x63 || lpBuffer[0xc] != result.b || lpBuffer[0xd] != 0x72
                || lpBuffer[0xe] != 0x63 || lpBuffer[0xf] != 0x68 || lpBuffer[0x10] != 2
                || lpBuffer[0x11] != 0 || lpBuffer[0x12] != 0 || lpBuffer[0x13] != 0)
            ebx.b = 0
        else
            ebx.b = 1
            *arg1 = 2

int32_t var_4

if (lpBuffer != 0)
    sub_403160(lpBuffer, var_4 - lpBuffer, 1)
result.b = ebx.b
return result
