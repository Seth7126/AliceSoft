// 函数: sub_621320
// 地址: 0x621320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = sub_621000(arg1)
void* var_20 = arg1
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** var_1c
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable*** eax_2 =
    sub_622650(&result_1, &var_20, &var_1c, &result_1)
int32_t result = result_1
void var_18
void var_c
int32_t* eax_4 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, result)
int32_t* esi_1 = *eax_4

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx_1 = eax_4[2]
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable*** edx_3 =
    *(esi_1[1] + ((edx_1 u>> 2 & (esi_1[2] - 1)) << 2)) + ((edx_1 & 3) << 2)
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** eax_9 = *eax_2
*eax_2 = nullptr
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_6 = *edx_3
*edx_3 = eax_9

if (ecx_6 != 0)
    (*ecx_6)->__offset(0x0).d(1)

struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_7 = var_1c

if (ecx_7 != 0)
    (*ecx_7)->__offset(0x0).d(1)

return result
