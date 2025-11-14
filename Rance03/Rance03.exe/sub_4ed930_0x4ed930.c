// 函数: sub_4ed930
// 地址: 0x4ed930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void* edi = data_75d4fc
sub_4a8dd0(edi + 0x174)

if (*(edi + 0x1e4) s> 1)
    sub_4a8d90(edi + 0x174)

*(edi + 0x1e4) -= 1
void* eax = &var_4
bool cond:1 = *(edi + 0x1e4) s>= 0
var_4 = 0

if (cond:1)
    eax = edi + 0x1e4

int32_t result = *eax
*(edi + 0x1e4) = result
return result
