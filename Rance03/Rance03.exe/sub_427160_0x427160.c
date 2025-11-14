// 函数: sub_427160
// 地址: 0x427160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4b8
int32_t result = sub_425440(esi + 0x944, &arg1, &arg2, esi + 0x944, arg1, arg2)

if (result + 1 u> 4)
    return result

int32_t* edi_1

switch (result)
    case 0
        edi_1 = esi + 0x2f4
    case 1
        edi_1 = esi + 0x3f0
    case 2
        edi_1 = esi + 0x4f0
    case 3, 0xffffffff
        edi_1 = esi + 0x5f4

sub_42b2b0(esi + 0x144, (**edi_1)())
(*(*edi_1 + 0xb4))(arg2)

if (result == 0xffffffff)
    sub_424950(esi + 0x5f4, arg2)

return (*(*(esi + 0x6f0) + 0xb4))(arg1)
