// 函数: sub_544f00
// 地址: 0x544f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 8) = *(arg2 + 0xbc)
int32_t ebx = *(arg2 + 0x10)

if (*(arg1 + 4) != ebx)
    sub_544db0(arg1)

BOOL result

if (ebx - 1 u<= 0xa)
    switch (ebx + &jump_table_544fc8[4]:3)
        case &lookup_table_544fdc, &lookup_table_544fdc[9]
            result = sub_545200(arg1, arg2, arg4)
            
            if (result.b == 0)
                return result
        case &lookup_table_544fdc[1], &lookup_table_544fdc[0xa]
            int32_t eax_3
            
            if (((*(arg3 + 8) - *(arg3 + 4)) & 0xfffffffc) s> 0)
                eax_3 = **(arg3 + 4)
            else
                eax_3 = 0
            
            eax_3.b = eax_3 != 0
            result = sub_545e00(arg1, arg2, eax_3.b, arg4)
            
            if (result.b == 0)
                return result
        case &lookup_table_544fdc[2]
            result = sub_546540(arg1, arg2, arg4)
            
            if (result.b == 0)
                return result
        case &lookup_table_544fdc[7]
            result = sub_5469e0(arg1, arg2, arg4)
            
            if (result.b == 0)
                return result

*(arg1 + 4) = ebx
result.b = 1
return result
