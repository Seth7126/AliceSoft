// 函数: sub_663550
// 地址: 0x663550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 0x50) += 1

if (*(arg1 + 0x2c) u>= *(arg1 + 0x50))
    *(arg1 + 0x74) = 0
else
    *(arg1 + 0x74) = 1
    *(arg1 + 0x6c) = *(arg1 + 0x68)
    sub_4a6210(data_75d4fc + 0x178, arg1 + 0x68)
    *(arg1 + 0x50) = 0

sub_67f150(*(arg1 + 0x58))
sub_6577f0(*(arg1 + 0x5c))
void* edi_1 = *(arg1 + 0x60)
int32_t esi = *(*(arg1 + 0x5c) + 0x42c)
sub_67f150(*(edi_1 + 0x50))
sub_653230(*(edi_1 + 0x58))
return sub_6761a0(*(edi_1 + 0x54), esi)
