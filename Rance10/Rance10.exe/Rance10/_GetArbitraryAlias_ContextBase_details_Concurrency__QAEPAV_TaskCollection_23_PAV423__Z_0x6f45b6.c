// 函数: ?GetArbitraryAlias@ContextBase@details@Concurrency@@QAEPAV_TaskCollection@23@PAV423@@Z
// 地址: 0x6f45b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void arg_4
void** eax = sub_6f0b17(arg1 + 0x80, &arg_4, nullptr)
void* const result

if (eax == 0)
    result = nullptr
else
    result = eax[2]

if (result == 0 || ((*(result + 0x78) u>> 1).b & 1) == 0)
    return result

var_8 = *(result + 0x64)
Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::FindAndDelete(
    arg1 + 0x80, &var_8, nullptr)
sub_6f4467(result)
operator new(result)
return nullptr
