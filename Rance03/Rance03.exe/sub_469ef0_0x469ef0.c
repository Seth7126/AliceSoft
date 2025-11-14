// 函数: sub_469ef0
// 地址: 0x469ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* eax_3 = (*(*arg4 + 8))(arg5, arg6)
int32_t esi = arg7 << 2
int32_t eax_7 = (*(*arg1 + 0x1c))() - esi
int32_t* eax_10 = (*(*arg4 + 0x1c))() - esi
int32_t* edi_1 = eax_1
void* esi_1 = eax_3
int32_t result = arg8
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        int64_t st1 = zx.q(*edi_1)
        uint64_t st2 = _m_punpckhwd(zx.q(*esi_1), 0)
        st1 = _m_punpckhwd(st1, 0)
        int64_t temp0_3 = __punpckhwd_mmxq_mmxd(st2, st2.d)
        uint64_t st3 = _m_psrlwi(__punpckhwd_mmxq_mmxd(temp0_3, temp0_3.d), 1)
        *edi_1 = _m_packuswb(_m_paddsw(_m_psrawi(_m_pmullw(_m_psubsw(st2, st1), st3), 7), st1), 0).d
        edi_1 = &edi_1[1]
        esi_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_1 += eax_7
    esi_1 += eax_10
    i = result
    result -= 1
while (i != 1)
return result
