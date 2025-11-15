// 函数: ?Insert@?$Hash@II@details@Concurrency@@QAEPAUListNode@123@ABI0@Z
// 地址: 0x6f461a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
uint32_t eax = Concurrency::details::Hash<uint32_t,uint32_t>::HashValue(arg2, *arg1)

if (Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::Lookup(
        arg1, arg2, eax) != 0)
    return nullptr

int32_t* result = sub_6e810c(0xc)
int32_t* result_1 = result

if (result == 0)
    result = nullptr
else
    *result = 0
    result[1] = *arg2
    result[2] = *arg3

*result = *(arg1[2] + (eax << 2))
*(arg1[2] + (eax << 2)) = result
arg1[1] += 1
return result
