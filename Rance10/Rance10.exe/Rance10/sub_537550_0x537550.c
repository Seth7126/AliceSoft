// 函数: sub_537550
// 地址: 0x537550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
void* edi = data_7fcba4
sub_4f5210(edi + 0x124)

if (*(edi + 0x1a8) s> 1)
    sub_4f5190(edi + 0x124)

*(edi + 0x1a8) -= 1
void* eax = &var_4
bool cond:1 = *(edi + 0x1a8) s>= 0
var_4 = 0

if (cond:1)
    eax = edi + 0x1a8

int32_t result = *eax
*(edi + 0x1a8) = result
return result
