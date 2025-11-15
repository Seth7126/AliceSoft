// 函数: sub_523020
// 地址: 0x523020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__builtin_memcpy(arg1 + 0x54, 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0d\x00\x00\x00\x"
"10\x00\x00\x00\x11\x00\x00\x00\x1b\x00\x00\x00\x20\x00\x00\x00\x21\x00\x00\x00\x22\x00\x00\x00\x23"
"00\x00\x00\x24\x00\x00\x00\x25\x00\x00\x00\x26\x00\x00\x00\x27\x00\x00\x00\x28\x00\x00\x00\x2d\x00"
"00\x00\x2e\x00\x00\x00\x30\x00\x00\x00\x31\x00\x00\x00\x32\x00\x00\x00\x33\x00\x00\x00\x34\x00\x00"
"00\x35\x00\x00\x00\x36\x00\x00\x00\x37\x00\x00\x00\x38\x00\x00\x00\x39\x00\x00\x00\x41\x00\x00\x
        00", 
    0x7c)
int32_t i = 0
void* edi = arg1 + 0xcc
int32_t eax = 0x37

do
    int32_t ecx = i + 0x42
    i += 1
    *(edi + 4) = ecx
    edi += 4
while (i s< 0x19)

for (int32_t i_1 = 0; i_1 s< 0xc; )
    int32_t ecx_1 = i_1 + 0x60
    i_1 += 1
    *(arg1 + (eax << 2) + 0x58) = ecx_1
    eax += 1

*(arg1 + (eax << 2) + 0x58) = 0x6d
*(arg1 + (eax << 2) + 0x5c) = 0x6e
*(arg1 + (eax << 2) + 0x60) = 0x6f
*(arg1 + (eax << 2) + 0x64) = 0x70
*(arg1 + (eax << 2) + 0x68) = 0x71
*(arg1 + (eax << 2) + 0x6c) = 0x72
*(arg1 + (eax << 2) + 0x70) = 0x73
*(arg1 + (eax << 2) + 0x74) = 0x74
*(arg1 + (eax << 2) + 0x78) = 0x75
*(arg1 + (eax << 2) + 0x7c) = 0x76
*(arg1 + (eax << 2) + 0x80) = 0x77
*(arg1 + (eax << 2) + 0x84) = 0x78
return _memset(arg1 + 4, 0, arg1 + 0x54 - (arg1 + 4))
