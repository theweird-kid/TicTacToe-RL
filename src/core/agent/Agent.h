#ifndef AGENT_H
#define AGENT_H

#define MLPACK_PRINT_INFO
#define MLPACK_PRINT_WARN

#include <mlpack/core.hpp>

#include <mlpack/methods/reinforcement_learning/environment/environment.hpp>
#include <mlpack/methods/reinforcement_learning/q_learning.hpp>
#include <mlpack/methods/reinforcement_learning/policy/greedy_policy.hpp>
#include <mlpack/methods/reinforcement_learning/training_config.hpp>
#include <mlpack/methods/reinforcement_learning/worker/one_step_q_learning_worker.hpp>
#include <mlpack/methods/reinforcement_learning/worker/worker.hpp>

class Agent {
public:
    Agent();
    void Train();
    std::pair<int, int> Act(const std::vector<std::vector<int>>& state);

private:
    using StateType = std::vector<std::vector<int>>;
    using ActionType = std::pair<int, int>;

    struct TicTacToeEnv {
        using State = StateType;
        using Action = ActionType;
        using Reward = double;

        static const size_t ActionSize = 9;

        bool IsTerminal(const State& state) const;
        Reward Sample(const State& state, const Action& action, State& nextState) const;
    };
};

#endif // AGENT_H