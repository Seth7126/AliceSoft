// 函数: sub_5c3920
// 地址: 0x5c3920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebp = arg1

if (*(ebp + 0x77) != 0)
    int32_t esi_1 = ebp[9]
    char* edi_1 = ebp[0xa]
    arg1 = ((edi_1 - esi_1) s/ 0x78) u>> 1
    char* esi_2 = esi_1 + arg1 * 0x78
    void* eax_5 = ebp[9]
    
    if (esi_2 == eax_5)
        ebp[0xa] = eax_5
    else if (esi_2 != edi_1)
        void* ebx_2 = 0
        arg1 = sub_6feca0(esi_2, edi_1, ebx_2)
        ebp[0xa] = ebx_2 + esi_2

char eax_8

if (*(arg2 + 0x44) != 0)
    eax_8 = 1
else
    int32_t __saved_esi_1 = 8
    void* eax_7
    eax_7, arg1 = sub_42cb30(ebp, "(sprite)", arg1)
    
    eax_8 = eax_7 != 0xffffffff ? 1 : 0

int32_t __saved_esi_2 = 0xe
*(ebp + 0x22) = eax_8
*(ebp + 0x23) = 0
ebp[0xf].b = 1
void* eax_9
int32_t ecx_7
eax_9, ecx_7 = sub_42cb30(ebp, "(nomakeshadow)", arg1)
ebp[0x11].b = 1
int32_t __saved_esi_3 = 0xc
ebp[0x12] = 0x3dcccccd
eax_9.b = eax_9 == 0xffffffff
*(ebp + 0x3d) = eax_9.b
ebp[0x13] = 0x3dcccccd
ebp[0x14] = 0
ebp[0x15] = 0
ebp[0x16] = 0x3f800000
ebp[0x17] = 0x3f800000
ebp[0x18] = 0x3f800000
ebp[0x19] = 0
ebp[0x1a] = 0
ebp[0x1b].b = 0
ebp[0x1c] = 0
void* eax_10
int32_t ecx_9
eax_10, ecx_9 = sub_42cb30(ebp, "(nolighting)", ecx_7)
int32_t __saved_esi_4 = 7
eax_10.b = eax_10 == 0xffffffff
ebp[0x1d].b = eax_10.b
void* eax_11
int32_t ecx_11
eax_11, ecx_11 = sub_42cb30(ebp, "(alpha)", ecx_9)
int32_t __saved_esi_5 = 5
eax_11.b = eax_11 != 0xffffffff
*(ebp + 0x75) = eax_11.b
void* eax_12
int32_t ecx_13
eax_12, ecx_13 = sub_42cb30(ebp, "(env)", ecx_11)
int32_t __saved_esi_6 = 6
eax_12.b = eax_12 != 0xffffffff
*(ebp + 0x76) = eax_12.b
bool cond:4 = sub_42cb30(ebp, "(both)", ecx_13) != 0xffffffff
ebp[0x1e].b = 1
void* result
result.b = cond:4
*(ebp + 0x77) = result.b
return result
