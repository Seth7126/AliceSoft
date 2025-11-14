// 函数: sub_672730
// 地址: 0x672730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
sub_67f150(*(arg1 + 0x54))
sub_681700(*(arg1 + 0x5c))
int32_t eax = sub_6817b0(*(arg1 + 0x5c))
void* edi = *(arg1 + 0x58)

if (*(edi + 0xe0) != eax && sub_684040(edi, eax) != 0)
    *(edi + 0xe0) = eax
    sub_684220(edi)

sub_6838c0(*(arg1 + 0x58))
sub_672cf0(arg1)
return 0
