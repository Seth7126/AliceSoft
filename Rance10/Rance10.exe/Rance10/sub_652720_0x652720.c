// 函数: sub_652720
// 地址: 0x652720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t eax

if (esi[5] != 0x64)
    *(*esi + 0x14) = 0x15
    *(*esi + 0x18) = esi[5]
    eax, arg1 = (**esi)(esi)

if (esi[0x15] == 0)
    eax, arg1 = (*esi[1])(esi, 0, 0x370)
    esi[0x15] = eax

int32_t* var_c_2 = arg1
esi[0xe] = 1
esi[0xf] = 1
esi[0x12] = 8
sub_652500(sub_652500(eax, 0, esi, 0x76ddc0, 0x32), 1, esi, 0x76df98, 0x32)
sub_6526c0(esi)
void* eax_8 = &esi[0x2a]
int32_t i_1 = 0x10
int32_t i

do
    *(eax_8 - 0x10) = 0
    eax_8 += 1
    *(eax_8 - 1) = 1
    *(eax_8 + 0xf) = 5
    i = i_1
    i_1 -= 1
while (i != 1)
bool cond:0 = esi[0x12] s> 8
esi[0x33] = i_1
esi[0x32] = i_1
eax_8.b = cond:0
esi[0x34].b = i_1.b
*(esi + 0xd2) = i_1.w
esi[0x36] = i_1
esi[0x37] = i_1
esi[0x38] = i_1
esi[0x39] = i_1
*(esi + 0xeb) = i_1.b
esi[0x3d] = i_1
*(esi + 0xd1) = eax_8.b
esi[0x35].b = 1
*(esi + 0xe9) = 0x101
esi[0x3b] = 0x10001
return sub_652840(esi) __tailcall
