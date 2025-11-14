// 函数: sub_422640
// 地址: 0x422640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0xe0)
void* eax_4 =
    sub_42fa10(esi, (*(**(esi + 0xc) + 8))((*(**(esi + 8) + 0x18))((*(**(esi + 8) + 8))())))
void* esi_1 = *(arg1 + 0xe0)
*(arg1 + 0xf8) = eax_4
int32_t eax_9 =
    sub_42fb60(esi_1, (*(**(esi_1 + 0xc) + 8))((*(**(esi_1 + 8) + 0x18))((*(**(esi_1 + 8) + 8))())))
void* esi_2 = *(arg1 + 0xe0)
*(arg1 + 0xfc) = eax_9
int32_t result =
    sub_42fc80(esi_2, (*(**(esi_2 + 0xc) + 8))((*(**(esi_2 + 8) + 0x18))((*(**(esi_2 + 8) + 8))())))
*(arg1 + 0x100) = result
return result
