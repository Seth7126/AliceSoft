// 函数: sub_672c90
// 地址: 0x672c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct dpparts::CColorDialog::VTable* var_14
sub_653960(&var_14)
CHOOSECOLORA* param0
param0->hwndOwner = *(arg1 + 8)
param0->rgbResult = arg2
ChooseColorA(param0)
uint32_t rgbResult = param0->rgbResult
var_14 = &dpparts::CColorDialog::`vftable'
j__free(param0)
int32_t var_10

if (var_10 != 0)
    j__free(var_10)

return rgbResult
