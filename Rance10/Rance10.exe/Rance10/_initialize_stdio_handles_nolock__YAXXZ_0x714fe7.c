// 函数: ?initialize_stdio_handles_nolock@@YAXXZ
// 地址: 0x714fe7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
void* result

for (int32_t i = 0; i != 3; i += 1)
    result = i & 0x3f
    void* esi_2 = result * 0x30 + (&data_7fc718)[i s>> 6]
    
    if (*(esi_2 + 0x18) == 0xffffffff || *(esi_2 + 0x18) == 0xfffffffe)
        *(esi_2 + 0x28) = 0x81
        enum STD_HANDLE nStdHandle
        
        if (i == 0)
            nStdHandle = STD_INPUT_HANDLE
        else if (i == 1)
            nStdHandle = STD_OUTPUT_HANDLE
        else
            nStdHandle = STD_ERROR_HANDLE
        
        HANDLE hFile = GetStdHandle(nStdHandle)
        enum FILE_TYPE eax_7
        
        if (hFile == 0xffffffff || hFile == 0)
            eax_7 = FILE_TYPE_UNKNOWN
        else
            eax_7 = GetFileType(hFile)
        
        if (eax_7 == FILE_TYPE_UNKNOWN)
            *(esi_2 + 0x28) |= 0x40
            *(esi_2 + 0x18) = 0xfffffffe
            result = data_7fc478
            
            if (result != 0)
                result = *(result + (i << 2))
                *(result + 0x10) = 0xfffffffe
        else
            result = eax_7 & 0xff
            *(esi_2 + 0x18) = hFile
            
            if (result == 2)
                *(esi_2 + 0x28) |= 0x40
            else if (result == 3)
                *(esi_2 + 0x28) |= 8
    else
        *(esi_2 + 0x28) |= 0x80

return result
