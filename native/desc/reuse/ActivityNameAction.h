/*
 * Copyright (c) 2020 Bytedance Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 * @authors Jianqiang Guo, Yuhui Su
 */
#ifndef ActivityNameAction_H_
#define ActivityNameAction_H_

#include "Action.h"
#include "RichWidget.h"
#include <vector>


namespace fastbotx {

    class ActivityNameAction : public ActivityStateAction {
    public:
        ActivityNameAction(stringPtr activity, const WidgetPtr &widget, ActionType act);

        stringPtr getActivity() const { return this->_activity; }

        ~ActivityNameAction() override;

    protected:
        ActivityNameAction();

        stringPtr _activity;

    };

    typedef std::shared_ptr<ActivityNameAction> ActivityNameActionPtr;
    typedef std::vector<ActivityNameActionPtr> ActivityNameActionPtrVec;
    typedef std::set<ActivityNameActionPtr, Comparator<ActivityNameAction>> ActivityNameActionPtrSet;

}

#endif //ActivityNameAction_H_
