// 函数: ?write_text_utf16le_nolock@@YA?AUwrite_result@?A0x47fa6670@@HQBDI@Z
// 地址: 0x7135e4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__alloca_probe(0x1410)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int16_t* ebx = arg3
int32_t edi
int32_t var_10 = edi
HANDLE hFile = *((&data_7fc718)[arg2 s>> 6] + (arg2 & 0x3f) * 0x30 + 0x18)
void* eax_6 = arg4 + ebx
HANDLE hFile_1 = hFile
void* var_140c = eax_6
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

while (ebx u< eax_6)
    uint8_t buffer[0x13e4]
    uint8_t (* edi_1)[0x13e4] = &buffer
    
    while (ebx u< eax_6)
        uint32_t eax_7 = zx.d(*ebx)
        ebx = &ebx[1]
        
        if (eax_7 == 0xa)
            arg1[2] += 2
            *edi_1 = 0xd
            edi_1 = &(*edi_1)[2]
        
        *edi_1 = eax_7.w
        edi_1 = &(*edi_1)[2]
        eax_6 = var_140c
        int32_t __saved_esi
        
        if (edi_1 u>= &__saved_esi:2)
            break
    
    uint32_t nNumberOfBytesToWrite = (edi_1 - &buffer) & 0xfffffffe
    uint32_t numberOfBytesWritten
    
    if (WriteFile(hFile, &buffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) == 0)
        *arg1 = GetLastError()
        break
    
    uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
    arg1[1] += numberOfBytesWritten_1
    
    if (numberOfBytesWritten_1 u< nNumberOfBytesToWrite)
        break
    
    eax_6 = var_140c
    hFile = hFile_1

int32_t entry_ebx
@__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
return arg1
